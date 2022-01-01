# Process and Technique

## 빅데이터 프로세스
- 데이터 소스 -> 수집 -> 저장 -> 처리 -> 분석 -> 표현
<br></br>
## 빅데이터 수집   

### 빅데이터 수집 방법
#### 로그 수집기
- 조직 내부에 존재하는 웹서버의 로그 수집, 웹 로드, 트랜잭션 로그, 클릭 로그, DB 로그 데이터 등을 수집
### 크롤링
- 주로 웹로봇을 이용하여 조직 외부에 존재하는 소셜 데이터 및 인터넷에 공개되어 잇는 자료수집
### 센싱
- 각종 센서를 통해 데이터를 수집
### RSS, Open API
- 데이터의 생산, 공유, 참여 환경인 웹 2.0을 구현하는 기술로 필요한 데이터를 프로그래밍을 통해 수집
<br></br>
## 빅데이터 저장
### 접근 방식
#### - 분산 파일 시스템
- 컴퓨터 네트워크로 공유하는 여러 호스트 컴퓨터 파일에 접근할 수 있는 파일 시스템
- GFS, HDFS, 아마존 S3 파일 시스템
#### - NoSQL
- 데이터 모델을 단순화해서 관계형 데이터 모델과 SQL을 사용하지 않는 모든 DBMS 또는 데이터 저장 장치
- Cloudata, HBase, Cassandra
#### - 병렬 DBMS
- 다수의 마이크로 프로세서를 사용하여 여러 디스크의 질의, 갱신, 입출력 등 데이터베이스 처리를 동시에 수행하는 데이터베이스 시스템
- VoltDB, SAP HANA, Verica, Greenplum, Netezza
#### - 네트워크 구성 저장 시스템
- 서로 다른 종류의 데이터 저장 장치를 하나의 데이터 서버에 연결하여 총괄적으로 데이터를 저장 및 관리
- SAN, NAS
<br></br>
### 빅데이터 저장 유형
#### - 정형 데이터(Structured)
- RDBMS의 고정된 필드에 저장
- 데이터 스키마 지원
- RDB, 스프레드시트
#### - 반정형 데이터(Semi-structured)
- 데이터 속성인 메타데이터를 가지며, 일반적으로 스토리지에 저장되는 데이터 파일
- XML 형태의 데이터로 값과 형식이 다소 일관성이 없음
- HTML, XML, JSON, 웹문서, 웹로그, 센서 데이터
#### - 비정형 데이터(Unstructured)
- 언어 분석이 가능한 텍스트 데이터
- 형태와 구조가 복잡한 이미지, 동영상 같은 멀티미디어 데이터
- 소셜 데이터, 문서, 이미지, 오디오, 비디오
<br></br>
### XML, JSON
#### - JSON
- 종료 태그 사용 안함
- 구문 길이 짧음
- 읽기/쓰기 속도 빠름
- 네임스페이스 제공 안함
- 배열 사용 가능
- Javascript 표준함수인 eval() 함수로 파싱
- 데이터 표시 없음
- 안전성 비교적 낮음
- UTF-8 인코딩
#### - XML
- 종료 태그 사용 함
- 구문 길이 긺
- 읽기/쓰기 속도 느림
- 네임 스페이스 제공
- 배열 사용 불가능
- XML 파서로 파싱
- 데이터 표시 제공
- 안전성 비교적 높음
- 다양한 인코딩 형식 지원
<br></br>
## 빅데이터 처리
### 빅데이터 처리 - 품질
#### - 데이터 여과 (Filtering)
- 오류 발견, 보정, 삭제 및 중복성 확인 등의 과정을 통해 데이터 품질을 향상시키는 기술
#### - 데이터 변환 (Transformation)
- 데이터 유형 변환 등 데이터 분석이 용이한 형태로 변환하는 기술
- 정규화(normalization), 집합화(Aggregation), 요약(summarization), 계층 생성 등의 방법 활용
- ETL(extaction/transformation/loading) 도구 제공 중
#### - 데이터 정제(Cleansing)
- 결측치들을 채워 넣고, 이상치를 식별 또는 제거하고, 잡음 섞인 데이터를 평활화하여 데이터의 불일치성을 교정하는 기술 (일반적으로 데이터는 불완전하고, 잡음이 섞여있고, 일관성이 없기 때문에 데이터 정제가 필요)
#### - 데이터 통합(Integration)
- 데이터 분석이 용이하도록 유사 데이터 및 연계가 필요한 데이터(또는 DB)들을 통합하는 기술
#### - 데이터 축소(Reduction)
- 분석 컴퓨팅 시간을 단축할 수 있도록 데이터 분석에 활용되지 않는 항목 등을 제거하는 기술
<br></br>
### 빅데이터 처리 - 방식
#### - 빅데이터 일괄 처리 기술
- 빅데이터를 여러 서버로 분산하여 각 서버에서 나누어 처리하고, 이를 다시 모아서 결과를 정리하는 분산 - 병렬 기술 방식
- 구글 맵리듀스(구글에서 분산 컴퓨팅을 지원할 목적으로 제작 - 발표한 소프트웨어 프레임웤, 함수형 프로그래밍에서 일반적으로 사용되는 맵과 리듀스 함수를 기반으로 주로 구성), 하둡 맵리듀스, 마이크로소프트 드라이애드 등이 있음
#### - 빅데이터 실시간 처리 기술
- 스트림 처리 기술로 강화된 스트림 컴퓨팅을 지원하는 IBM의 InfoSphere Streams, 분산 환경에서 스트리밍 데이터를 분석할 수 있게 해주는 트위터의 스톰
#### - 빅데이터 처리 프로그래밍 지원 기술
- 분산 데이터를 처리하는 프로그래밍 언어인 구글의 소잴과 병렬 처리를 하는 고성는 데이터-플로우 언어와 실행 프레임워크인 하둡 Pig
<br></br>
## 빅데이터 분석
### 비즈니스 예측 분석 과정 (Forrester)
### BI to BA (Datanet, Market Trend) (* BA : Business Analytics)
<br></br>
## 빅데이터 시각화
<br></br>
## 빅데이터와 차세대 기술
- Robotics
- Synthetic Biology
- Computational Science
- Nano Technology
- Quantum Computing
- 4D Printing
- Trillion Sensor Movement
- Blockchain
- Cognitive Science
- Semantic Web
- Intelligence Augmentation
- Self-driving Vehicles
- Conscious Technology
- and synergies among these
### AI 잠재적 위험 경고 (증강인간 VS 감성로봇 : 특이점)
### 부의 집중 증가 (엑스마키아)
### 소득격차 심화 (UBI)
### 고용없는 경제성장 (대기업/게임회사)
### 노동력을 대체하는 미래기술 (자본과 기술투자 수익률 > 노동수익률 <- 장기적인 구조적 실업)