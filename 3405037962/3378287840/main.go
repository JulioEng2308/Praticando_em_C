package main
import "fmt"

func main () {
  var digito int
  var num1 int
  var num2 int
  var num3 int
  var num4 int

  fmt.Scan(&digito)

  num1 = digito / 1000
  num2 = (digito / 100) - (num1 * 10)
  num3 = (digito / 10) - ((num1 * 100) + (num2 * 10))
  num4 = digito - ((num1 * 1000) + (num2 * 100) + (num3 * 10))

  if (num1 + num3) % (num2 + num4) == 0 {
      fmt.Println("liberado")
  } else {
      fmt.Println("negado")
  }
}