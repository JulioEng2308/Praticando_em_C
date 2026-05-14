package main

import "fmt"

func main() {
  var idade int

  
  fmt.Scanln(&idade)

  if idade < 16 {
    fmt.Println("nao votante")
  } else if (idade >= 16 && idade < 18) || (idade > 65) {
    fmt.Println("eleitor facultativo")
  } else {
    fmt.Println("eleitor obrigatorio")
  } 
}