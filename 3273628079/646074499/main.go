package main
import "fmt"

func main () {
  var vetor[10] int
  var i int

  for i = 0; i < 10; i++ {
    fmt.Scanln(&vetor[i])
  }
  for i = 9; i >= 0; i-- {
    fmt.Print(vetor[i]," ")
  }
}