#include <stdio.h>
int main()
{
    // การใช้git ep1
    // mkdir ใน command prompt เป็นการสร้างdirectory
    // dir ดูรายการ directories และ files ใน working directory ปัจจุบัน
    //touch -m เป็นการสร้าง.txt
    //git add (file) เป็นการเตียมไฟล์ที่จะcommit
    //git status เป็นการตรวจสอบ ว่ามีไฟล์ใดเปลี่ยนแปลงใน git repository
    // git config user.name "name" ระบุตัวตน ใช้globaในเครื่่องส่วนตัวได้
    // git commit -m "nametag" //เป็นการcommit เพื่อเก็บversionของไฟล์
    //สามารถใช้.แทนชื่อไฟล์ได้ เพื่อให้เพิ่มทุกไฟล์ที่เกิดการแก้ไขในdirectory (git add .)
    // ดูcheckpoin(version)ทั้งหมด --git log --all --decorate --oneline --graph
    // การเชื่อมgit repo ของเรากับ git hub ใช้ git remote add origin https://github.com/tatar1212123/-.git
    // git push -u origin master ส่งไฟล์ขึ้นไปที่ git 
    // สามารถนำ Checkpoint เก่ากลับมาทำงานได้ โดย
    // กลับมาทั้งหมด
    // git checkout <commit-id>
    // กลับมาบางไฟล์
	// git checkout <commit-id>  <ชื่อไฟล์>
    // git clone <git-url> การโหลดgit repoมาทำต่อ
    // HEAD pointer จะชี้ไปที่ Checkpoint ใหม่ล่าสุดที่เครื่องเราใช้อยู่ 
    
    // ถ้าต้องการใช้เวอร์ชันเก่านี้ สามารถ commit เพื่อเก็บและใช้เวอร์ชันเก่านี้ได้
    // ตัวอย่าง
    // git add .
    // git status
    // git commit -m "bring back a.txt from commit f0a9b41(ที่เก็บ)"





}