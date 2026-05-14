package main
import "fmt"

func main () {
  var vet[6] float32
  var maiornota float32
  var menornota float32
  var media float32
  var indice int
  var soma float32
  var restantes float32

  for indice = 0; indice < 6; indice++ {
      fmt.Scanln(&vet[indice])
  }


  if vet[0] > vet[1] {
      maiornota = vet[0]
      menornota = vet[1]
  } else {
    maiornota = vet[1]
    menornota = vet[0]
  }

  
  for indice = 2; indice < 6; indice++ {
      if vet[indice] > maiornota {
         maiornota = vet[indice]
      } else {
          if vet[indice] < menornota {
              menornota = vet[indice]
          }
      }
   }

  soma = 0
  for indice = 0; indice < 6; indice++ {
      soma = soma + vet[indice]
      restantes = soma - maiornota - menornota
      media = restantes / 4
  }
  
 

  
  fmt.Printf("Maior nota: %.2f\n", maiornota)
  fmt.Printf("Menor nota: %.2f\n", menornota)
  fmt.Printf("A media eh: %.2f", media)

}