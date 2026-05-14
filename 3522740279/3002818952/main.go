package main
import "fmt"

func main () {
  var vetor[11] int
  var i int 
  var j int
  var menores int
  var mediana int 
  var posicaomediana int = 5

  for i = 0; i < 11; i++ {
    fmt.Scan(&vetor[i])
  }
  for i = 0; i < 11; i++ {
      menores = 0

    for j = 0; j<11; j++ {
        if vetor[j] < vetor[i] {
          menores++
        }
      }
        if menores == posicaomediana {
          mediana = vetor[i]
         
        }
  }
  fmt.Println(mediana)
    for i = 0; i < 11; i++ {
      fmt.Print(vetor[i], " ")
    }
  
}