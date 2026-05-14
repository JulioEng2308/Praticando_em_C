//professor, irei ao banheiro

package main 
import "fmt"

func matrizTransposta(matriz [][]int, tamanho int) [][]int {
    var mattransposta [][]int
    var linha int
    var coluna int

    mattransposta = make([][]int, tamanho)

    for linha = 0; linha < tamanho; linha++ {
        mattransposta[linha] = make([]int, tamanho)
    }

    for linha = 0; linha < tamanho; linha++ {
        for coluna = 0; coluna < tamanho; coluna++ {
            mattransposta[coluna][linha] = matriz[linha][coluna]
        }
    }
    return mattransposta
}

func imprimeMatriz(matriz [][]int, tamanho int) {
    var linha, coluna int

    for linha = 0; linha < tamanho; linha++ {
        for coluna = 0; coluna < tamanho; coluna++ {
            fmt.Printf("%d ", matriz[linha][coluna])
        }
        fmt.Println()
    }
}

func main () {
  var matriz [][]int
  var tamanho int
  var mattransposta [][]int
  var linha, coluna int
  var resultado int

  fmt.Scan(&tamanho)

  matriz = make([][]int, tamanho)
  mattransposta = make([][]int, tamanho)

  for linha = 0; linha < tamanho; linha++ {
    matriz[linha] = make([]int, tamanho)
    mattransposta[linha] = make([]int, tamanho)
    
  }

  for linha = 0; linha < tamanho; linha++ {
      for coluna = 0; coluna < tamanho; coluna++ {
          fmt.Scan(&resultado)
          matriz[linha][coluna] = resultado
      }
  }

  fmt.Println("Matriz A")
  imprimeMatriz(matriz, tamanho)

  mattransposta = matrizTransposta(matriz, tamanho)

  fmt.Println("Matriz Transposta")
  imprimeMatriz(mattransposta, tamanho)
}