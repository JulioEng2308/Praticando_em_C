package main 
import "fmt"

func main () {
  var vetor[10] int
  var indice int
  //var numero int
  var menor int 
  //var posicao int

  for indice = 0; indice < 10; indice++ {
      fmt.Scan(&vetor[indice])
  }

    menor = vetor[0]
  
  for indice = 0; indice < 10; indice++ {
      if vetor[indice] < menor {
          menor = vetor[indice]
      }
  }
  fmt.Print(menor)

}