package main
import "fmt"

func main() {
    var t,x,coin int
    fmt.Scanln(&t)
  for i:=0;i<t;i++ {
        fmt.Scan(&x)
        coin = x%10;
        fmt.Println(coin)
    }
}
