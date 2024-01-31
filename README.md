# Testing intergration of a C project with OSS-Fuzz

## Steps to Test
```
//Clone the oss-fuzz project and this babyfuzz project
git clone https://github.com/google/oss-fuzz
git clone https://github.com/VinhPham2106/babyfuzz.git

//Test integration compliance (technical, assuming project is approved and communication with main contributors established
cp -rf ./babyfuzz/oss-fuzz-integration ./oss-fuzz/projects/babyfuzz
cd oss-fuzz

//Just make sure docker is on
sudo service docker start

//Build and run fuzzer
python3 infra/helper.py build_fuzzers babyfuzz
python3 infra/helper.py run_fuzzer babyfuzz baby_fuzzer
```

