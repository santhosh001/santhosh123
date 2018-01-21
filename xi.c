package Guvi;
import java.util.Scanner;
public class WordsIgnore {
		public static void main(String[] args) {
			String userId = "b";
			String StocksDao;
			StocksDao stockDao = new StocksDao();
			List<StockBean> holdingList = stockDao.getHoldings(userId);
			 Iterator<StockBean> itr =  holdingList.iterator();
			while(itr.hasNext()){
				StockBean stockBean = itr.next();
				System.out.println(stockBean.getStockId()+ "/"+ stockBean.getStockName());
			}

		}

