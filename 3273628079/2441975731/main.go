package main
import "fmt"

func main () {
  var n int
  var vetor[100] int
  var i int
  var pares int
  var impares int
  
  fmt.Scanln(&n)
  
  for i = 1; i <= n; i++ {
      fmt.Scan(&vetor[i])
      if vetor[i] % 2 == 0 {
          pares++
      } else {
          impares++
      }
  }
  fmt.Println("pares:",pares)
  fmt.Println("impares:",impares)



}
  
  
