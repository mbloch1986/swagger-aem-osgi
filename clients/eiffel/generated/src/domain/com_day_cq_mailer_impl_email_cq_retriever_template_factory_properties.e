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
class COM_DAY_CQ_MAILER_IMPL_EMAIL_CQ_RETRIEVER_TEMPLATE_FACTORY_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    mailer_email_embed: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    mailer_email_charset: detachable CONFIG_NODE_PROPERTY_STRING 
      
    mailer_email_retriever_user_id: detachable CONFIG_NODE_PROPERTY_STRING 
      
    mailer_email_retriever_user_pw_d: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_mailer_email_embed (a_name: like mailer_email_embed)
        -- Set 'mailer_email_embed' with 'a_name'.
      do
        mailer_email_embed := a_name
      ensure
        mailer_email_embed_set: mailer_email_embed = a_name		
      end

    set_mailer_email_charset (a_name: like mailer_email_charset)
        -- Set 'mailer_email_charset' with 'a_name'.
      do
        mailer_email_charset := a_name
      ensure
        mailer_email_charset_set: mailer_email_charset = a_name		
      end

    set_mailer_email_retriever_user_id (a_name: like mailer_email_retriever_user_id)
        -- Set 'mailer_email_retriever_user_id' with 'a_name'.
      do
        mailer_email_retriever_user_id := a_name
      ensure
        mailer_email_retriever_user_id_set: mailer_email_retriever_user_id = a_name		
      end

    set_mailer_email_retriever_user_pw_d (a_name: like mailer_email_retriever_user_pw_d)
        -- Set 'mailer_email_retriever_user_pw_d' with 'a_name'.
      do
        mailer_email_retriever_user_pw_d := a_name
      ensure
        mailer_email_retriever_user_pw_d_set: mailer_email_retriever_user_pw_d = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_MAILER_IMPL_EMAIL_CQ_RETRIEVER_TEMPLATE_FACTORY_PROPERTIES%N")
        if attached mailer_email_embed as l_mailer_email_embed then
          Result.append ("%Nmailer_email_embed:")
          Result.append (l_mailer_email_embed.out)
          Result.append ("%N")    
        end  
        if attached mailer_email_charset as l_mailer_email_charset then
          Result.append ("%Nmailer_email_charset:")
          Result.append (l_mailer_email_charset.out)
          Result.append ("%N")    
        end  
        if attached mailer_email_retriever_user_id as l_mailer_email_retriever_user_id then
          Result.append ("%Nmailer_email_retriever_user_id:")
          Result.append (l_mailer_email_retriever_user_id.out)
          Result.append ("%N")    
        end  
        if attached mailer_email_retriever_user_pw_d as l_mailer_email_retriever_user_pw_d then
          Result.append ("%Nmailer_email_retriever_user_pw_d:")
          Result.append (l_mailer_email_retriever_user_pw_d.out)
          Result.append ("%N")    
        end  
      end
end


