package main
import "fmt"

func main () {
 var num1 int
 var num2 int

  fmt.Scan(&num1, &num2)

  if num1 < num2 {
      fmt.Println("Numero", num1, "eh menor que", num2)
  } else {
      fmt.Println("Numero", num2, "eh menor que", num1)
  }
}