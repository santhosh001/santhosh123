package guviprgm;

public class Pro12 {
	public abstract class Applicant {
		private int applicantId;
		private String applicantName;
		private int yrsOfExp;
		private String skills;
		private double expectedSalary;
		public Applicant(int applicantId,String applicantName,int yrsOfExp, String skills, double expSalary){
			
		}
		public int getApplicantId() {
			return applicantId;
		}
		public void setApplicantId(int applicantId) {
			this.applicantId = applicantId;
		}
		public String getApplicantName() {
			return applicantName;
		}
		public void setApplicantName(String applicantName) {
			this.applicantName = applicantName;
		}
		public int getYrsOfExp() {
			return yrsOfExp;
		}
		public void setYrsOfExp(int yrsOfExp) {
			this.yrsOfExp = yrsOfExp;
		}
		public String getSkills() {
			return skills;
		}
		public void setSkills(String skills) {
			this.skills = skills;
		}
		public double getExpectedSalary() {
			return expectedSalary;
		}
		public void setExpectedSalary(double expectedSalary) {
			this.expectedSalary = expectedSalary;
		}

	}
	
