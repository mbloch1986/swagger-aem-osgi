note
 description:"[
		Adobe Experience Manager OSGI config (AEM) API
 		Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
  		OpenAPI spec version: 1.0.0-pre.0
 	    Contact: opensource@shinesolutions.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class COM_ADOBE_CQ_ACCOUNT_API_ACCOUNT_MANAGEMENT_SERVICE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    cq_accountmanager_token_validity_period: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    cq_accountmanager_config_requestnewaccount_mail: detachable CONFIG_NODE_PROPERTY_STRING 
      
    cq_accountmanager_config_requestnewpwd_mail: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_cq_accountmanager_token_validity_period (a_name: like cq_accountmanager_token_validity_period)
        -- Set 'cq_accountmanager_token_validity_period' with 'a_name'.
      do
        cq_accountmanager_token_validity_period := a_name
      ensure
        cq_accountmanager_token_validity_period_set: cq_accountmanager_token_validity_period = a_name		
      end

    set_cq_accountmanager_config_requestnewaccount_mail (a_name: like cq_accountmanager_config_requestnewaccount_mail)
        -- Set 'cq_accountmanager_config_requestnewaccount_mail' with 'a_name'.
      do
        cq_accountmanager_config_requestnewaccount_mail := a_name
      ensure
        cq_accountmanager_config_requestnewaccount_mail_set: cq_accountmanager_config_requestnewaccount_mail = a_name		
      end

    set_cq_accountmanager_config_requestnewpwd_mail (a_name: like cq_accountmanager_config_requestnewpwd_mail)
        -- Set 'cq_accountmanager_config_requestnewpwd_mail' with 'a_name'.
      do
        cq_accountmanager_config_requestnewpwd_mail := a_name
      ensure
        cq_accountmanager_config_requestnewpwd_mail_set: cq_accountmanager_config_requestnewpwd_mail = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_ACCOUNT_API_ACCOUNT_MANAGEMENT_SERVICE_PROPERTIES%N")
        if attached cq_accountmanager_token_validity_period as l_cq_accountmanager_token_validity_period then
          Result.append ("%Ncq_accountmanager_token_validity_period:")
          Result.append (l_cq_accountmanager_token_validity_period.out)
          Result.append ("%N")    
        end  
        if attached cq_accountmanager_config_requestnewaccount_mail as l_cq_accountmanager_config_requestnewaccount_mail then
          Result.append ("%Ncq_accountmanager_config_requestnewaccount_mail:")
          Result.append (l_cq_accountmanager_config_requestnewaccount_mail.out)
          Result.append ("%N")    
        end  
        if attached cq_accountmanager_config_requestnewpwd_mail as l_cq_accountmanager_config_requestnewpwd_mail then
          Result.append ("%Ncq_accountmanager_config_requestnewpwd_mail:")
          Result.append (l_cq_accountmanager_config_requestnewpwd_mail.out)
          Result.append ("%N")    
        end  
      end
end


