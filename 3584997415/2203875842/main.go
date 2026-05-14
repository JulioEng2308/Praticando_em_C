package main
import "fmt"

func main () {
  var num1 int
  var num2 int

  fmt.Scan(&num1, &num2)

  if num1 + num2 == 42 {
      fmt.Println("A soma de", num1, "e", num2, "eh equivalente ao enigma do universo 42")
      fmt.Println("System Down")
  } else {
      fmt.Println("System Down")
  }


}