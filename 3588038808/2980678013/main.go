package main
import "fmt"

func main () {
  var lado1 int
  var lado2 int
  var lado3 int
  
  fmt.Scanln(&lado1)
  fmt.Scanln(&lado2)
  fmt.Scanln(&lado3)

  if (lado1 + lado2)>lado3 &&
      (lado2 + lado3)>lado1 && 
      (lado1 + lado3)>lado2 {
      if lado1 == lado2 && lado2 == lado3{
        fmt.Println("EQUILATERO")
      } else if lado1 == lado2 || lado1 == lado3 || lado2 == lado3{
        fmt.Println("ISOCELES")
      } else {
        fmt.Println("ESCALENO")
      }
  } else {
    fmt.Println("NAO FORMA")
  }
  
}