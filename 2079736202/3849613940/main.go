package main 
import "fmt"

func proRec (num1, num2 int) int {
    if num2 == 0 {
        return 0
    }

    return num1 + proRec(num1, num2-1)
}

func main () {
    var num1 int
    var num2 int
    var result int

    fmt.Scan(&num1, &num2)

    result = proRec(num1, num2)

    fmt.Println(result)
    

}