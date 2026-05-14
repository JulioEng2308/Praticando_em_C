//professor, irei sair de casa agora, mas terminarei as questões antes de acabar no tempo
//foi mal prof. tava entendendo errado kkkkkkkkkkkk
package main 
import "fmt"

func VerificarLinha (matM [3][3]int, vetU[3] int) int {  
  var linha int 
  var coluna int
  var dado int

  for linha = 0; linha < 3; linha++ {
      dado = 0
    for coluna = 0; coluna < 3; coluna++ {
        if matM[linha][coluna] != vetU[coluna] {
          dado = 1
        }
    }
    if dado == 0  {
        return linha
    }  
  }
  return -1
  
}


func main () {
  var matM [3][3]int
  var vetU[3] int
  var linha int
  var coluna int
  var result int
  

  for linha = 0; linha < 3; linha++ {
      for coluna = 0; coluna < 3; coluna++ {
          fmt.Scan(&matM[linha][coluna])
      }
  }

  
  for coluna = 0; coluna < 3; coluna++ {
      fmt.Scan(&vetU[coluna])
  }
  

  result = VerificarLinha(matM, vetU)
  fmt.Println(result)
  
}