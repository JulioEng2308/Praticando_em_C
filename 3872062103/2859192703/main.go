//professor vou recarregar o site ok
//descobri o erro prof, perdão
package main 
import "fmt"

func ehIdentidade(matriz[][] int) {
    var identidade bool
    var linha int
    var coluna int 

    identidade = true

    for linha = 0; linha < 4; linha++ {
      for coluna = 0; coluna < 4; coluna++ {
          if linha == coluna {
              if matriz[linha][coluna] != 1 {
                  
              }
          } else {
              if matriz[linha][coluna] != 0 {
                  identidade = false
              }
          }
      }
    }
    if identidade {
        fmt.Println("IDENTIDADE")
    } else {
        fmt.Println("NORMAL")
    }
}

func main () {
    var matriz [][]int 
    var linha int
    var coluna int
    var valor int

    matriz = make([][]int, 4)

  for linha = 0; linha < 4; linha++ {
      matriz[linha] = make([]int, 4)
  }

  for linha = 0; linha < 4; linha++ {
      for coluna = 0; coluna < 4; coluna++ {
          fmt.Scan(&valor)
          matriz[linha][coluna] = valor
      }
  }
  ehIdentidade(matriz)
}