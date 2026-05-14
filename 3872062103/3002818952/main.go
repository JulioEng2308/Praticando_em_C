package main
import "fmt"

func main () {
  var vet [11]int
  var indice int
  var mediana int
  var valmenor int
  var identico int 
  var cont int

  for indice = 0; indice < 11; indice++ {
      fmt.Scan(&vet[indice])
  }

  indice = 0
  
  for indice < 11 && mediana == 0 {
      valmenor = 0
      identico = 0
      cont = 0
      for cont < 11 {
          if vet[cont] < vet[indice] {
              valmenor++ 
          } else {
              if vet[cont] == vet[indice]{
                identico++ 
              }
          }
          cont++
      }
      if valmenor <= 5 && valmenor + identico > 5{
          mediana = vet[indice]
      }
      indice++
  }

  fmt.Println(mediana)

  for indice = 0; indice < 11; indice++ {
      fmt.Print(vet[indice], " ")
    
  }
   fmt.Println()   

    
}