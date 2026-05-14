package main
import "fmt"

func main () {
     var vetor[15] int
     var imenor int
     var maior int
     var menor int
     var imaior int 
     var indice int
    
     
  
     for indice = 0; indice < 15; indice++{
       fmt.Scan(&vetor[indice])
     }

     maior = vetor[0]
     menor = vetor[0]
     imaior = 0
     imenor = 0

     for indice = 1; indice < 15; indice++ {
       if vetor[indice] > maior {
         maior = vetor[indice]
         imaior = indice
       }
             if vetor[indice] < menor {
               menor = vetor[indice]
               imenor = indice 
             }
     }
     fmt.Println("maior:", imaior)
     fmt.Println("menor:", imenor)
}