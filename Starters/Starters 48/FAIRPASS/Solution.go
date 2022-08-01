package main
import "fmt"

func main(){
  var t,n,k int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&n,&k)
    if k>n {
      fmt.Println("YES")
    } else {
      fmt.Println("NO")
    }
  }
}
