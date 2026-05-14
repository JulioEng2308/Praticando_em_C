package main
import "fmt"

func main () {
  var matrizini [3][3]int
  var matrizfin [3][3]int
  var matrizresultado [3][3]int
  var num1 int
  var num2 int 
  var linha, coluna int
  
 
  fmt.Scan(&num1)
  fmt.Scan(&num2)
  
  for linha = 0; linha < 3; linha++ {
      for coluna = 0; coluna < 3; coluna++ {
          matrizini[linha][coluna] = num1
          matrizfin[linha][coluna] = num2
      }
  }

  for linha = 0; linha < 3; linha++ {
      for coluna = 0; coluna < 3; coluna++ {
          matrizresultado[linha][coluna] = matrizini[linha][coluna] + matrizfin[linha][coluna]
      }
  }

  for linha = 0; linha < 3; linha++ {
      for coluna = 0; coluna < 3; coluna++ {
          fmt.Printf("%d ", matrizresultado[linha][coluna])
      }
    fmt.Println()
  }

  
 
}