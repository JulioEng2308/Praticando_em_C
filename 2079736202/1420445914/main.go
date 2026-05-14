package main 
import "fmt"

func main () {
  var vet [10] int
  var indice int
  var num1 int
  var cont int

  for indice = 0; indice < 10; indice++ {
      fmt.Scan(&vet[indice])
  }

  fmt.Scanln(&num1)
  cont = 0
  for indice = 0; indice < 10; indice++ {
      if vet[indice] == num1 {
          cont = 1
      }
  }

  if cont == 1 {
    fmt.Println("achou")
  } else {
    fmt.Println("nao achou")
  }
}