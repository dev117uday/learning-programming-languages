for file in `ls -1 *.go`
do
    baseFilename=`basename $file .go`
    echo "appending ${baseFilename}.go to test.md"
    echo "" >> test.md
    echo "## $baseFilename.go" >> test.md
    echo "" >> test.md
    echo "\`\`\`" >> test.md
    echo "" >> test.md
    cat "$baseFilename.go" >> test.md
    echo "" >> test.md
    echo "\`\`\`" >> test.md
    echo "" >> test.md
 done
