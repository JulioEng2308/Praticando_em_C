package main 
import "fmt"

func main () {
  var vet[7] int
  var indice int
  var maior1 int
  var maior2 int

  for indice = 0; indice < 7; indice++ {
      fmt.Scanln(&vet[indice])
    }

  if vet[0] > vet[1] {
      maior1 = vet[0]
      maior2 = vet[1]
  } else {
      maior1 = vet[1]
      maior2 = vet[0]
  }

  for indice = 2; indice < 7; indice++ {
      if vet[indice] > maior1 {
          maior2 = maior1
          maior1 = vet[indice]
      } else {
          if vet[indice] > maior2 {
              maior2 = vet[indice]
          }
      }
  }

  fmt.Println(maior1)
  fmt.Println(maior2)
}