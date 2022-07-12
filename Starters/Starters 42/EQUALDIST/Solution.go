package main
import "fmt"

func main() {
  var a,b,t int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&a,&b)
    if (a+b)%2 == 0{
      fmt.Println("YES")
    } else {
      fmt.Println("NO")
    }
}
