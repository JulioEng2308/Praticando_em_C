package main
import "fmt"

func main () {
    var peso int
    var distancia float64
    var frete float64

    fmt.Scan(&peso)
    fmt.Scan(&distancia)

    if (peso <= 1000) && (distancia <= 100) {
        frete = 50.0
        fmt.Printf("%.1f", frete)
    } else {
        if (peso <= 1000) && (distancia > 100) {
            frete = 50.0 + ((distancia-100) * 0.20)
            fmt.Printf("%.1f", frete)
        } else {
            if ((peso > 1000) && (peso <= 5000) && (distancia <= 100)) {
                frete = 100.0
                fmt.Printf("%.1f", frete)
            } else {
                if ((peso > 1000) && (peso <= 50000) && (distancia > 100)) {
                    frete = 100.0 + ((distancia - 100) * 0.30)
                    fmt.Printf("%.1f", frete)
                } else {
                    if (peso > 5000) {
                        frete = 500.0
                        fmt.Printf("%.1f", frete)
                    }
                }
            }
        }
    }
}