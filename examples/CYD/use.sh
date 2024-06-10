echo "Remove ./main"
rm -rf ./main

echo "Copy ./examples/Common to ./main"
cp -r ./examples/Common ./main

echo "Copy ./examples/CYD to ./main"
cp -rT ./examples/CYD ./main

echo "Copy ./examples/CYD/sdkconfig to ./sdkconfig"
cp ./examples/CYD/sdkconfig ./sdkconfig
