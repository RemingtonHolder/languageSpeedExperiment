package main

import (
	"fmt"
	"strconv"
)

func main() {
	var x int = 102114 / 2564
	var fString = "4.0800"
	var f, _ = strconv.ParseFloat(fString, 8)
	var xString = strconv.Itoa(x)
	fmt.Println(xString)
	fmt.Println(f)
}
