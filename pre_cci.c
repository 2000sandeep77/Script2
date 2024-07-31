# 1 "c:\\users\\administrator\\documents\\vugen\\scripts\\finalassesment_2\\\\combined_FinalAssesment_2.c"
# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 







int   lr_cyberark_get_vault(char * first_param, ...);
int   lr_cyberark_get_vault_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\administrator\\documents\\vugen\\scripts\\finalassesment_2\\\\combined_FinalAssesment_2.c" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\administrator\\documents\\vugen\\scripts\\finalassesment_2\\\\combined_FinalAssesment_2.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"63ad4fee4c4647739730a299d89dcdbb\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 10 "globals.h" 2



 
 



# 3 "c:\\users\\administrator\\documents\\vugen\\scripts\\finalassesment_2\\\\combined_FinalAssesment_2.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\administrator\\documents\\vugen\\scripts\\finalassesment_2\\\\combined_FinalAssesment_2.c" 2

# 1 "Action.c" 1
Action()
{

	
	lr_start_transaction("TR01_Launch");
	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("banking", 
		"URL=http://localhost/banking", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("r10.o.lencr.org", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x0Bh\\xA9.\\x99\\xC1d\\x83I\\xCEL\\xB5\\xD3R\\x89\\xBB\\xBA", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", "ENDITEM", 
		"LAST");

	web_custom_request("r10.o.lencr.org_2", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04v<\\xE7\\x12\\x13\\x0B\\xF0\\xD6\rq\\x0F9A\\x0Fi\\x9A\\x13", 
		"LAST");

	web_custom_request("r10.o.lencr.org_3", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xC3\nN\\xE0\\x18\\xCF\\x8BW\\x8E\\x01F\\xB4\\x85~&,D", 
		"LAST");

	web_custom_request("r10.o.lencr.org_4", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04Ra$\\xCC\\xD4\\xFF\\xD9\\x10\\xBF ;\\xE3\\xB9\\x11g\\xB0\\x92", 
		"EXTRARES", 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", "ENDITEM", 
		"LAST");

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01\\xE0c\\x8B\\x9A\\xDF\\x9CB\\x9B\\x90\\xA4n\\xB9\\x86\\x06\\x06", 
		"LAST");

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xBA\\xAD\\x9A4\\xCC\\x06O\\x8C\\xD0`k\\x99]\\x9C$", 
		"LAST");

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1722394630668\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		"LAST");

	web_custom_request("r10.o.lencr.org_5", 
		"URL=http://r10.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14i\\x0F\\xE4\\x15g\\xEDo\\x7F\\xB54Dd\\x06\\x06o\tg\\x07qr\\x04\\x14t\\xA4v)\\x17\\x18T\\x8517\\xBEg\\xE6\\x06X\\xC0\\xBC\\xC5\\x05r\\x02\\x12\\x04Ra$\\xCC\\xD4\\xFF\\xD9\\x10\\xBF ;\\xE3\\xB9\\x11g\\xB0\\x92", 
		"LAST");

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/128.0.3/20240725162350/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%252010.0.0.0.20348.887%2520(x64)/ISET%3ASSE4_2%2CMEM%3A16196/default/default/update.xml?force=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("57b60a8e-e35a-44b3-a257-19b6f9293a20", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/57b60a8e-e35a-44b3-a257-19b6f9293a20", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":4,\"start_time\":\"2024-07-31T07:02:19.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.060+00:00\",\"reason\":\"startup\",\"experiments\":{\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"recommend-add-ons-staff-pick-part-2\":{"
		"\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\""
		"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"app_display_version\":\"128.0.3\",\"app_build\":\"20240725162350\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"windows_build_number\":20348,\"build_date\":\"1970-01-01T00:00:00+00:00\",\""
		"first_run_date\":\"2024-07-31+00:00\",\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"822571c1-9c9d-4d99-8bbb-5171f4f2a291\"},\"quantity\":{\"urlbar.pref_max_results\":10},\"boolean\":{\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_data_collection\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_topsites\":true}},\"events\":[{\"timestamp\":0,\"category\":\"webcompatreporting\",\"name\":\""
		"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1722409337656\",\"setting\":\"required\"}},{\"timestamp\":1233,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1722409338890\"}}]}", 
		"LAST");

	 

	web_custom_request("54b38b97-8db4-4545-81b9-96b0d777adf8", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/54b38b97-8db4-4545-81b9-96b0d777adf8", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":4,\"start_time\":\"2024-07-31T06:04:30.000+00:00\",\"end_time\":\"2024-07-31T07:07:07.162+00:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"recommend-add-ons-staff-pick-part-2\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"app_display_version\":\"128.0.3\",\"architecture\":\"x86_64\",\"app_build\":\"20240725162350\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"app_channel\":\"release\",\"windows_build_number\":20348,\"client_id\":\""
		"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\",\"first_run_date\":\"2024-07-31+00:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"counter\":{\"use.counter.css.page.css_margin_bottom\":5,\"use.counter.css.page.css_transition\":3,\"use.counter.css.page.css_margin_left\":5,\"use.counter.css.doc.css_animation\":1,\"use.counter.css.doc.css_padding_left\":2,\"use.counter.css.doc.css_background_color\":2,\"use.counter.css.page.css_font_weight\":5,\"use.counter.css.page.css_padding_top\":5,\""
		"use.counter.css.page.css_text_decoration\":5,\"use.counter.css.page.css_word_spacing\":3,\"use.counter.css.page.css_width\":5,\"use.counter.css.doc.css_margin_right\":2,\"use.counter.css.doc.css_cursor\":2,\"use.counter.dedicated_workers_destroyed\":5,\"use.counter.css.doc.css_display\":2,\"use.counter.css.doc.css_text_align\":2,\"use.counter.css.page.css_list_style\":5,\"use.counter.css.doc.css_margin_bottom\":2,\"use.counter.css.doc.css_float\":2,\"use.counter.css.doc.css_border\":2,\""
		"use.counter.css.doc.css_margin\":2,\"use.counter.css.doc.css_padding_right\":2,\"use.counter.css.doc.css_z_index\":1,\"use.counter.css.doc.css_word_spacing\":1,\"use.counter.css.doc.css_padding_top\":2,\"use.counter.css.page.css_background_color\":5,\"use.counter.css.page.css_margin_top\":5,\"use.counter.css.page.css_margin\":5,\"use.counter.css.page.css_overflow_x\":2,\"use.counter.css.page.css_overflow_y\":2,\"use.counter.css.page.css_padding_bottom\":5,\"use.counter.css.page.css_z_index\":1,\""
		"use.counter.css.doc.css_overflow_y\":1,\"use.counter.css.page.css_top\":1,\"use.counter.css.page.css_padding_left\":5,\"use.counter.css.doc.css_line_height\":2,\"use.counter.css.page.css_line_height\":5,\"use.counter.css.doc.css_left\":2,\"use.counter.css.doc.css_width\":2,\"use.counter.css.doc.css_border_collapse\":1,\"use.counter.css.doc.css_letter_spacing\":1,\"use.counter.content_documents_destroyed\":2,\"use.counter.css.page.css_left\":5,\"use.counter.css.page.css_font_family\":5,\""
		"use.counter.css.page.css_padding\":5,\"use.counter.css.page.css_transition_duration\":5,\"use.counter.css.page.css_border_bottom\":2,\"use.counter.css.page.css_box_shadow\":5,\"use.counter.css.doc.css_border_radius\":2,\"use.counter.css.doc.css_margin_top\":2,\"use.counter.css.page.css_border_bottom_left_radius\":1,\"use.counter.css.doc.css_font_family\":2,\"use.counter.css.page.css_border_right\":5,\"use.counter.css.page.css_animation\":1,\"use.counter.css.page.css_border_top_right_radius\":1,\""
		"use.counter.css.page.css_color\":5,\"use.counter.css.page.css_display\":5,\"use.counter.css.page.css_float\":5,\"use.counter.css.page.css_margin_right\":5,\"use.counter.css.page.css_opacity\":1,\"use.counter.css.doc.css_list_style\":2,\"use.counter.css.doc.css_text_decoration\":2,\"use.counter.css.page.css_border_radius\":5,\"use.counter.css.page.css_clear\":5,\"use.counter.css.doc.css_overflow_x\":1,\"use.counter.css.page.css_position\":5,\"use.counter.css.doc.css_margin_left\":2,\""
		"use.counter.top_level_content_documents_destroyed\":5,\"use.counter.css.doc.css_position\":2,\"use.counter.css.doc.css_transition_duration\":2,\"use.counter.css.page.css_letter_spacing\":3,\"use.counter.css.doc.css_padding\":2,\"use.counter.css.page.css_padding_right\":5,\"use.counter.css.page.css_font_size\":5,\"use.counter.css.doc.css_clear\":2,\"use.counter.css.page.css_cursor\":5,\"use.counter.css.page.css_height\":5,\"use.counter.css.doc.css_padding_bottom\":2,\""
		"use.counter.css.page.css_border_collapse\":2,\"use.counter.css.doc.css_font_weight\":2,\"use.counter.css.doc.css_box_shadow\":2,\"use.counter.css.doc.css_overflow\":2,\"use.counter.css.doc.css_border_right\":2,\"use.counter.css.doc.css_font_size\":2,\"use.counter.css.doc.css_transition\":1,\"use.counter.css.doc.css_border_bottom\":1,\"use.counter.css.doc.css_color\":2,\"use.counter.css.page.css_border\":5,\"use.counter.css.page.css_overflow\":5,\"use.counter.css.doc.css_height\":2,\""
		"use.counter.css.page.css_text_align\":5}}}", 
		"LAST");

	web_custom_request("117d2adb-368d-42f5-82c6-b03e4a3e7b00", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/pageload/1/117d2adb-368d-42f5-82c6-b03e4a3e7b00", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3,\"start_time\":\"2024-07-31T05:47:11.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.089+00:00\",\"reason\":\"startup\"},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-07-31+00:00\",\"app_display_version\":\"128.0.3\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_build\":\"20240725162350\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"windows_build_number\""
		":20348},\"events\":[{\"timestamp\":0,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"redirect_time\":\"486\",\"load_type\":\"NORMAL\",\"using_webdriver\":\"false\",\"response_time\":\"574\",\"load_time\":\"1153\",\"redirect_count\":\"1\",\"http_ver\":\"1\",\"glean_timestamp\":\"1722409338827\",\"lcp_time\":\"1149\"}},{\"timestamp\":19902,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"glean_timestamp\":\"1722409358729\",\"load_type\":\"LINK\",\"http_ver\":\"1\",\"lcp_time\":\""
		"207\",\"using_webdriver\":\"false\",\"load_time\":\"233\",\"fcp_time\":\"222\",\"response_time\":\"35\",\"dns_lookup_time\":\"3\"}},{\"timestamp\":62820,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_time\":\"189\",\"redirect_time\":\"49\",\"redirect_count\":\"1\",\"response_time\":\"75\",\"glean_timestamp\":\"1722409401649\",\"http_ver\":\"1\",\"load_type\":\"LINK\",\"using_webdriver\":\"false\",\"js_exec_time\":\"0\"}},{\"timestamp\":98899,\"category\":\"perf\",\"name\":\""
		"page_load\",\"extra\":{\"http_ver\":\"1\",\"load_time\":\"123\",\"redirect_time\":\"31\",\"response_time\":\"63\",\"using_webdriver\":\"false\",\"glean_timestamp\":\"1722409437729\",\"redirect_count\":\"1\",\"load_type\":\"LINK\",\"js_exec_time\":\"0\"}},{\"timestamp\":140621,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_type\":\"LINK\",\"using_webdriver\":\"false\",\"glean_timestamp\":\"1722409479451\",\"load_time\":\"2183\",\"response_time\":\"84\",\"dns_lookup_time\":\"0\",\""
		"js_exec_time\":\"2085\",\"http_ver\":\"1\"}}]}", 
		"LAST");

	web_custom_request("92b2308d-bc92-43a5-89b9-db6fa3e85f98", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/92b2308d-bc92-43a5-89b9-db6fa3e85f98", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":8,\"start_time\":\"2024-07-31T07:02:19.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.187+00:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2024-07-31+00:00\",\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\",\"windows_build_number\":20348,\"os_version\":\"10.0\",\"app_channel\":\"release\",\"os\":\"Windows\",\"app_display_version\":\"128.0.3\",\"app_build\""
		":\"20240725162350\",\"architecture\":\"x86_64\",\"locale\":\"en-US\"},\"metrics\":{\"string\":{\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\"},\"boolean\":{\"topsites.sponsored_enabled\":true,\"newtab.weather_enabled\":true,\"topsites.enabled\":true,\"newtab.search.enabled\":true,\"pocket.enabled\":true,\"pocket.is_signed_in\":false,\"pocket.sponsored_stories_enabled\":true},\"quantity\":{\"topsites.rows\":1},\"string_list\":{\""
		"newtab.blocked_sponsors\":[]}}}", 
		"LAST");

	web_custom_request("45a5f73d-6199-468b-9670-a82479871e6c", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/45a5f73d-6199-468b-9670-a82479871e6c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":7,\"start_time\":\"2024-07-31T07:02:19.000+00:00\",\"end_time\":\"2024-07-31T07:07:15.273+00:00\",\"reason\":\"active\",\"experiments\":{\"disable-redirects-for-authretries\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"add-an-image-to-pdf-with-alt-text-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"highlighting-in-pdfs-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"home-and-newtab-wallpapers-v1-rollout-global\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"launch-firefox-on-os-restart-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ech-roll-out\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2024-h2-velocity-desktop\":{\"branch\":\""
		"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"upgrade-spotlight-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"phc-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"consolidated-search-configuration-row-desktop-relaunch\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-email-and-calendar-tabs-early-day-user\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"recommend-add-ons-staff-pick-part-2\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"60.1.1\",\"first_run_date\":\"2024-07-31+00:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_build\":\"20240725162350\",\"app_display_version\":\"128.0.3\",\"locale\":\"en-US\",\"os\":\""
		"Windows\",\"app_channel\":\"release\",\"windows_build_number\":20348,\"client_id\":\"eba24bb8-b1b7-4cf8-820b-b08ed2ba5bb7\"},\"metrics\":{\"counter\":{\"browser.engagement.active_ticks\":22,\"browser.engagement.uri_count\":5},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1,\"newtab\":1,\"pageload\":1,\"use-counters\":1}},\"uuid\":{\"legacy.telemetry.client_id\":\"822571c1-9c9d-4d99-8bbb-5171f4f2a291\"}}}", 
		"LAST");
	
	
	lr_end_transaction("TR01_Launch",2);

	lr_think_time(15);

	lr_start_transaction("TR02_StaffLogin");

	web_url("staff_login.php", 
		"URL=http://localhost/banking/staff_login.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../favicon.ico", "ENDITEM", 
		"LAST");

	lr_end_transaction("TR02_StaffLogin",2);

	lr_start_transaction("TR03_Login");

	web_submit_data("staff_login.php_2", 
		"Action=http://localhost/banking/staff_login.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/staff_login.php", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=staff_id", "Value={P_Staff_id}", "ENDITEM", 
		"Name=password", "Value={P_Staff_password}", "ENDITEM", 
		"Name=staff_login-btn", "Value=LOGIN", "ENDITEM", 
		"EXTRARES", 
		"Url=img/customers/No_image.jpg", "Referer=http://localhost/banking/staff_profile.php", "ENDITEM", 
		"LAST");

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/success.txt?ipv4", "Referer=", "ENDITEM", 
		"LAST");

	lr_end_transaction("TR03_Login",2);

	lr_start_transaction("TR04_ApprovePendingAccount");

	web_submit_data("staff_profile.php", 
		"Action=http://localhost/banking/staff_profile.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/staff_profile.php", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=apprvac", "Value=Approve Pending Account", "ENDITEM", 
		"LAST");

	lr_end_transaction("TR04_ApprovePendingAccount",2);

	lr_think_time(151);

	lr_start_transaction("TR05_ApplicationNumber");

	web_submit_data("pending_customers.php", 
		"Action=http://localhost/banking/pending_customers.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/pending_customers.php", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=application_no", "Value={P_ApplicationNumber}", "ENDITEM", 
		"Name=search_application", "Value=Search", "ENDITEM", 
		"LAST");

	lr_end_transaction("TR05_ApplicationNumber",2);

	lr_think_time(60);

	lr_start_transaction("TR06_Confirm");
	
	 web_reg_save_param("C_AccountNumber",
        "LB=Account no :",
        "RB=\\n",
        "LAST");

	web_submit_data("pending_customers.php_2", 
		"Action=http://localhost/banking/pending_customers.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/pending_customers.php", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=approve_cust", "Value=Approve", "ENDITEM", 
		"LAST");

	lr_end_transaction("TR06_Confirm",2);

 
 
 

	lr_start_transaction("TR09_LogOut");

	web_url("staff_logout.php", 
		"URL=http://localhost/banking/staff_logout.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/banking/pending_customers.php", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("TR09_LogOut",2);
	
	lr_output_message(lr_eval_string("{C_AccountNumber}"));
	


 
 
    
   

	return 0;
}
# 5 "c:\\users\\administrator\\documents\\vugen\\scripts\\finalassesment_2\\\\combined_FinalAssesment_2.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\administrator\\documents\\vugen\\scripts\\finalassesment_2\\\\combined_FinalAssesment_2.c" 2

