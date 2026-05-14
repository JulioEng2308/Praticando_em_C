package main

import "fmt"

func main () {
  var numero1 int
  var numero2 int
  var numero3 int
  

  fmt.Println("Digite os numeros")
  fmt.Scan(&numero1, &numero2, &numero3)
  

  if (numero1 >= numero2) && (numero2 >= numero3) {
         fmt.Println(numero1, numero2, numero3)
  } else if numero1 >= numero3 && numero3 >= numero2 {
         fmt.Println(numero1, numero3, numero2)
  } else if numero2 >= numero1 && numero1 >= numero3 {
         fmt.Println(numero2, numero1, numero3)
  } else if numero2 >= numero3 && numero3 >= numero1 {
         fmt.Println(numero2, numero3, numero1)
  } else if numero3 >= numero1 && numero1 >= numero2 {
         fmt.Println(numero3, numero1, numero2)
  } else {
         fmt.Println(numero3, numero2, numero1)
  }
}
