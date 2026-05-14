package main
import "fmt"

func main (){
  var matriz [3][3]int
  var linha int
  var coluna int 
  var maior int

  for linha = 0; linha < 3; linha++ {
      for coluna = 0; coluna < 3; coluna++ {
          fmt.Scan(&matriz[linha][coluna])
      } 
  }

  maior = matriz[0][0]

  for linha = 0; linha < 3; linha++ {
      for coluna = 0; coluna < 3; coluna++ {
          if matriz[linha][coluna] > maior {
              maior = matriz[linha][coluna]
          }
      }
  
  }

  fmt.Print(maior)
}