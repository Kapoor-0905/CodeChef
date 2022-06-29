package main
import "fmt"

func main(){
  var t int
  var arr[4] int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    for j:=0;j<4;j++ {
      fmt.Scan(&arr[j])
    }
    if arr[0] != arr[2] && arr[1] !=arr[3] {
      fmt.Println("1")
    } else {
      fmt.Println("2")
    }
  }
}
