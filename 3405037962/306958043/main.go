package main
import "fmt"

func main () {
  var num1 int
  var num2 int
  var num3 int 
  var soma int
  var media float64
  var maior int
  var menor int
  var produto int

  fmt.Scan(&num1)
  fmt.Scan(&num2)
  fmt.Scan(&num3)

  soma = num1 + num2 + num3

  media = float64(soma) / 3.0

  produto = num1 * num2 * num3

  fmt.Printf("%.1f\n",media)
  fmt.Println(soma)
  fmt.Println(produto)

  if num1 <= num2 && num1 <= num3 {
      menor = num1
      fmt.Println(menor)
  } else {
      if num2 <= num1 && num2 <= num3 {
          menor = num2
          fmt.Println(menor)
      } else {
          if num3 <= num1 && num3 <= num2{
              menor = num3
              fmt.Println(menor)
          }
      }
  }

  if num1 >= num2 && num1 >= num3 {
      maior = num1
      fmt.Println(maior)
  } else {
      if num2 >= num1 && num2 >= num3 {
          maior = num2
          fmt.Println(maior)
      } else {
          if num3 >= num1 && num3 >= num2{
              maior = num3
              fmt.Println(maior)
          }
      }
  }
  
}