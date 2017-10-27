//
//  Constants.h
//  ScanExample
//
//  Created by Paytabs LLC on 6/16/14.
//  Copyright (c) 2014 PayTabs Co. All rights reserved.
//

#ifndef ScanExample_Constants_h
#define ScanExample_Constants_h

// get your app token from the card.io website
#define CardIOAppToken      @"d3114e892866405198e5bf51da68fe03"

#endif
#define Type1 0
#define Type2 1
#define DefaultURL @"https://www.paytabs.com/"
#define  error1	@"Merchant ID and password does not match"
#define  error2	@"API Key not valid"
#define  error3	@"The transaction number is invalid"
#define  error4	@"Unknown transaction error occurred"
#define  error5	@"Your card was rejected or invalid."
#define  error6	@"There is an issue with server, Please check with Site Admin!"
#define error7  @"Your card was rejected or invalid."

#define ErrorCode1 @"0001"
#define ErrorCode2 @"0002"
#define ErrorCode3 @"0003"
#define ErrorCode4 @"0004"
#define ErrorCode5 @"0"
#define ErrorCode6 @"Server is not Respond"
#define ErrorCode7 @"0921"

#define responseCode @""
#define PTtransactionid @""

#define SecurityKey @"error_code"
#define Tag_Error_Code @"error_code"
#define Tag_Error_Code2 @"error_code2"
#define APIAuthenetication @"apiv3/validate_secret_key"
#define APIKeyValidation @"apiv3/api_key_valid"
#define APIPrepareTransaction @"apiv3/prepare_transaction"
#define APILogout @"apiv3/logout"
#define APICompleteTransaction @"apiv3/complete_transaction"
#define APIPayerAuth @"apiv3/payer_auth_complete"
#define APIPayerResult @"apiv3/payer_auth_result"
#define ValidateSecretAuth @"apiv3/validate_secret_key"
#define ValidateAmexAuth @"apiv3/amex_ksa_auth"
#define GetMerchantInfoURL @"apiv3/get_merchant_info"
#define SEndPaymentReceipt @"apiv3/sent_payment_receipt"
#define getImages @""

#define Tag_Merchant_Id @"merchant_id"
#define Tag_Merchant_Password @"merchant_password"
#define Tag_API_Key @"api_key"
#define Tag_SECRET_Key @"secret_key"
#define Tag_EMAIL_Key @"merchant_email"
#define Tag_amexKSA @"amex_pin"
#define Tag_amexKSAID @"amex_pin_id"
#define AmountSentToAPI @"amount"
#define Tag_Tax @"tax"
#define Tag_Discount @"discount"
#define Tag_Exhange @"exchange_rate"
#define Tag_Title @"title"
#define Tag_First_Name @"cc_first_name"
#define Tag_Last_Name @"cc_last_name"
#define Tag_Card_Exp @"card_exp"
#define Tag_CVV @"cvv"
#define Tag_Card_Numb @"card_number"
#define Tag_Card_Type @"card_type"
#define Tag_Original_Assignee @"original_assignee_code"
#define Tag_Currency @"currency"
#define Tag_Email @"email"
#define Tag_acsURL @"acsURL"
#define Tag_XID @"xid"
#define Tag_CallBack @"callBackURL"
#define Tag_TransactionID @"TransactionID"
#define Tag_Type @"type"
#define Tag_Transaction_Id @"transaction_id"
#define Tag_PaRes @"PaRes"
#define Tag_MD @"MD"
#define Tag_Rating @"rating"
#define Tag_Signature @"signature"
#define Tag_TermURL @"TermUrl"
#define Tag_Local_Transaction_Id @"transaction_id"
#define Tag_Response_Code @"response_code"

#define Tag_email_customer @"customer_email"
#define TAg_phoneNumberCustomer @"customer_phone"
//#define Tag_CallBackURL @"callBackURL"
//[@"acsURL",@"paReq",@"xid",@"callBackURL",@"apiKey",@"TransactionID",@"rating",@"signature",@"cardType"]
//api_key=%@&transaction_id=%@&rating=%@&type=%@&signature=
//transaction_id=%@&PaRes=%@&MD=%@&api_key
//api_key=%@&amount=%@&tax=%@&discount=%@&title=%@&cc_first_name=%@&cc_last_name=%@&card_exp=%@&cvv=%@&card_number=%@&card_type=%d&original_assignee_code=%@&currency=%@&email=


