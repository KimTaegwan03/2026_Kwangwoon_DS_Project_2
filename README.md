# 2026_Kwangwoon_DS_Project_2
2026-10-12 업로드 예정

[데이터 구조 Project 2 과제 안내]
과제에 대한 추가 내용 및 변경 사항이 README 파일에 상시 업데이트될 예정이므로, 주기적으로 체크해 주시기 바랍니다.

---

## Update Notes  

**2026-10-12 :**  
- initial upload  

---

## Due Date  

 - 이론 2026 년 11 월 8일 일요일 23:59:59(추가 제출: 2026년 11월 9일 월요일 00:59:59 까지, 10% 감점)
 - 실습 2026 년 11 월 6일 금요일 23:59:59(추가 제출: 2026년 11월 7일 토요일 00:59:59 까지, 10% 감점)

 - 제출 전에 반드시 제안서를 꼼꼼히 읽어보시고, 요구사항을 모두 충족했는지 확인하시기 바랍니다.  
 - 프로젝트 진행 중 궁금한 사항은 GitHub 저장소의 Issues 탭을 통해 질문해 주시기 바랍니다.

---

## How to Clone Repository  

```bash
sudo apt-get install git
git clone https://github.com/KimTaegwan03/2026_Kwangwoon_DS_Project_2.git
```

---

## NEED TO DOWNLOAD

```bash
sudo apt install make
sudo apt install gcc
sudo apt install g++
```

## How to Run  
- 반드시 Makefile이 위치한 디렉토리 내에서 수행해야 함. cd(change directory)로 변경하기

```bash
cd DS_Project2
make
./run
```

## How to check memory leak 
- make 이후 생성된 run 파일 실행 전에 valgrind 명령어를 입력하면 메모리 누수를 확인 가능

```bash
sudo apt-get update
sudo apt-get install valgrind
valgrind ./run
```

---

## 구현 고려사항  

 - 제공된 스켈레톤 코드는 참고용이며, 본인이 원하는 방식으로 함수를 자유롭게 추가하거나 수정하여 구현할 수 있다(파일 이름 · 클래스 이름 · 함수 이름은 변경x).
 - 단, 과제 제안서에 명시된 요구사항을 반드시 충족해야 한다(감점 요인).
 - 함수의 반환형과 매개변수는 구현에 맞게 조정할 수 있으나, 파일 이름 · 클래스 이름 · 함수 이름은 변경하지 않으며, 전체 프로그램의 실행 흐름과 명령어 처리 방식은 과제 명세를 따라야 한다.
 - 스켈레톤 코드는 빌드 성공을 보장하지 않으며, 학생이 직접 수정 및 보완하여 완성해야 한다.
 - 본 프로젝트는 데이터구조 수업에서 다루는 기본 자료구조의 동작 확인을 목적으로 하는 과제이다. 따라서 극단적인 예외 상황까지 고려할 필요는 없다.

---
