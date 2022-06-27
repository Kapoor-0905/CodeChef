package main
import "fmt"

func main(){
  var t, water int
  var arr[2] int
  fmt.Scanln(&t)
  for i:=0;i<t;i++{
    for j:=0;j<4;j++{
      fmt.Scan(&a)
    }
    water = (arr[2]*arr[3]) + arr[0];
    if water > arr[1] {
      fmt.Println("overflow")
    else if water == arr[1]{
      fmt.Println("filled")
    else if water < arr[1]{
        fmt.Println("unfilled")
