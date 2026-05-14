package main
import "fmt"

func main () {
    var vetor[10] int
    var soma int
    var indice int
    var divisores int
    var numero int 
  

  for indice = 0; indice < 10; indice++ {
      fmt.Scan(&vetor[indice])
  } 

  soma = 0 
  
  for indice = 0; indice < 10; indice++ {
        if vetor[indice] >= 2 {
          divisores = 0
          for numero = 2; numero < vetor[indice]; numero++ {
              if vetor[indice] % numero == 0 {
                  divisores = 1
              } 
          }
        if divisores == 0 {
          soma += vetor[indice]
        }
      }  
  }
  fmt.Print(soma)
}