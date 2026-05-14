package main
import "fmt"

func main () {
  var digito int
  var num1 int
  var num2 int 
  var num3 int 
  var digito2 int

  fmt.Scan(&digito)

  num1 = digito / 100
  num2 = (digito / 10) - (num1 * 10)
  num3 = digito - ((num1 * 100) + (num2 * 10))

  if (digito > 100) && (digito <= 999) {
      num1 = num1 * 0
      digito2 = (num2 * 10) + num3
      if digito % digito2 == 0 {
          fmt.Println("SIM")
      } else {
          fmt.Println("NAO")
      }
  } 

}