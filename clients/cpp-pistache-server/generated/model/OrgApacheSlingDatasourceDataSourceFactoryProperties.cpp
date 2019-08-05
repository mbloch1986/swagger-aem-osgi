/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OrgApacheSlingDatasourceDataSourceFactoryProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingDatasourceDataSourceFactoryProperties::OrgApacheSlingDatasourceDataSourceFactoryProperties()
{
    m_Datasource_nameIsSet = false;
    m_Datasource_svc_prop_nameIsSet = false;
    m_DriverClassNameIsSet = false;
    m_UrlIsSet = false;
    m_UsernameIsSet = false;
    m_PasswordIsSet = false;
    m_DefaultAutoCommitIsSet = false;
    m_DefaultReadOnlyIsSet = false;
    m_DefaultTransactionIsolationIsSet = false;
    m_DefaultCatalogIsSet = false;
    m_MaxActiveIsSet = false;
    m_MaxIdleIsSet = false;
    m_MinIdleIsSet = false;
    m_InitialSizeIsSet = false;
    m_MaxWaitIsSet = false;
    m_MaxAgeIsSet = false;
    m_TestOnBorrowIsSet = false;
    m_TestOnReturnIsSet = false;
    m_TestWhileIdleIsSet = false;
    m_ValidationQueryIsSet = false;
    m_ValidationQueryTimeoutIsSet = false;
    m_TimeBetweenEvictionRunsMillisIsSet = false;
    m_MinEvictableIdleTimeMillisIsSet = false;
    m_ConnectionPropertiesIsSet = false;
    m_InitSQLIsSet = false;
    m_JdbcInterceptorsIsSet = false;
    m_ValidationIntervalIsSet = false;
    m_LogValidationErrorsIsSet = false;
    m_Datasource_svc_propertiesIsSet = false;
    
}

OrgApacheSlingDatasourceDataSourceFactoryProperties::~OrgApacheSlingDatasourceDataSourceFactoryProperties()
{
}

void OrgApacheSlingDatasourceDataSourceFactoryProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingDatasourceDataSourceFactoryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Datasource_nameIsSet)
    {
        val["datasource.name"] = ModelBase::toJson(m_Datasource_name);
    }
    if(m_Datasource_svc_prop_nameIsSet)
    {
        val["datasource.svc.prop.name"] = ModelBase::toJson(m_Datasource_svc_prop_name);
    }
    if(m_DriverClassNameIsSet)
    {
        val["driverClassName"] = ModelBase::toJson(m_DriverClassName);
    }
    if(m_UrlIsSet)
    {
        val["url"] = ModelBase::toJson(m_Url);
    }
    if(m_UsernameIsSet)
    {
        val["username"] = ModelBase::toJson(m_Username);
    }
    if(m_PasswordIsSet)
    {
        val["password"] = ModelBase::toJson(m_Password);
    }
    if(m_DefaultAutoCommitIsSet)
    {
        val["defaultAutoCommit"] = ModelBase::toJson(m_DefaultAutoCommit);
    }
    if(m_DefaultReadOnlyIsSet)
    {
        val["defaultReadOnly"] = ModelBase::toJson(m_DefaultReadOnly);
    }
    if(m_DefaultTransactionIsolationIsSet)
    {
        val["defaultTransactionIsolation"] = ModelBase::toJson(m_DefaultTransactionIsolation);
    }
    if(m_DefaultCatalogIsSet)
    {
        val["defaultCatalog"] = ModelBase::toJson(m_DefaultCatalog);
    }
    if(m_MaxActiveIsSet)
    {
        val["maxActive"] = ModelBase::toJson(m_MaxActive);
    }
    if(m_MaxIdleIsSet)
    {
        val["maxIdle"] = ModelBase::toJson(m_MaxIdle);
    }
    if(m_MinIdleIsSet)
    {
        val["minIdle"] = ModelBase::toJson(m_MinIdle);
    }
    if(m_InitialSizeIsSet)
    {
        val["initialSize"] = ModelBase::toJson(m_InitialSize);
    }
    if(m_MaxWaitIsSet)
    {
        val["maxWait"] = ModelBase::toJson(m_MaxWait);
    }
    if(m_MaxAgeIsSet)
    {
        val["maxAge"] = ModelBase::toJson(m_MaxAge);
    }
    if(m_TestOnBorrowIsSet)
    {
        val["testOnBorrow"] = ModelBase::toJson(m_TestOnBorrow);
    }
    if(m_TestOnReturnIsSet)
    {
        val["testOnReturn"] = ModelBase::toJson(m_TestOnReturn);
    }
    if(m_TestWhileIdleIsSet)
    {
        val["testWhileIdle"] = ModelBase::toJson(m_TestWhileIdle);
    }
    if(m_ValidationQueryIsSet)
    {
        val["validationQuery"] = ModelBase::toJson(m_ValidationQuery);
    }
    if(m_ValidationQueryTimeoutIsSet)
    {
        val["validationQueryTimeout"] = ModelBase::toJson(m_ValidationQueryTimeout);
    }
    if(m_TimeBetweenEvictionRunsMillisIsSet)
    {
        val["timeBetweenEvictionRunsMillis"] = ModelBase::toJson(m_TimeBetweenEvictionRunsMillis);
    }
    if(m_MinEvictableIdleTimeMillisIsSet)
    {
        val["minEvictableIdleTimeMillis"] = ModelBase::toJson(m_MinEvictableIdleTimeMillis);
    }
    if(m_ConnectionPropertiesIsSet)
    {
        val["connectionProperties"] = ModelBase::toJson(m_ConnectionProperties);
    }
    if(m_InitSQLIsSet)
    {
        val["initSQL"] = ModelBase::toJson(m_InitSQL);
    }
    if(m_JdbcInterceptorsIsSet)
    {
        val["jdbcInterceptors"] = ModelBase::toJson(m_JdbcInterceptors);
    }
    if(m_ValidationIntervalIsSet)
    {
        val["validationInterval"] = ModelBase::toJson(m_ValidationInterval);
    }
    if(m_LogValidationErrorsIsSet)
    {
        val["logValidationErrors"] = ModelBase::toJson(m_LogValidationErrors);
    }
    if(m_Datasource_svc_propertiesIsSet)
    {
        val["datasource.svc.properties"] = ModelBase::toJson(m_Datasource_svc_properties);
    }
    

    return val;
}

void OrgApacheSlingDatasourceDataSourceFactoryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("datasource.name") != val.end())
    {
        if(!val["datasource.name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["datasource.name"]);
            setDatasourceName( newItem );
        }
        
    }
    if(val.find("datasource.svc.prop.name") != val.end())
    {
        if(!val["datasource.svc.prop.name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["datasource.svc.prop.name"]);
            setDatasourceSvcPropName( newItem );
        }
        
    }
    if(val.find("driverClassName") != val.end())
    {
        if(!val["driverClassName"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["driverClassName"]);
            setDriverClassName( newItem );
        }
        
    }
    if(val.find("url") != val.end())
    {
        if(!val["url"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["url"]);
            setUrl( newItem );
        }
        
    }
    if(val.find("username") != val.end())
    {
        if(!val["username"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["username"]);
            setUsername( newItem );
        }
        
    }
    if(val.find("password") != val.end())
    {
        if(!val["password"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["password"]);
            setPassword( newItem );
        }
        
    }
    if(val.find("defaultAutoCommit") != val.end())
    {
        if(!val["defaultAutoCommit"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["defaultAutoCommit"]);
            setDefaultAutoCommit( newItem );
        }
        
    }
    if(val.find("defaultReadOnly") != val.end())
    {
        if(!val["defaultReadOnly"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["defaultReadOnly"]);
            setDefaultReadOnly( newItem );
        }
        
    }
    if(val.find("defaultTransactionIsolation") != val.end())
    {
        if(!val["defaultTransactionIsolation"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["defaultTransactionIsolation"]);
            setDefaultTransactionIsolation( newItem );
        }
        
    }
    if(val.find("defaultCatalog") != val.end())
    {
        if(!val["defaultCatalog"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["defaultCatalog"]);
            setDefaultCatalog( newItem );
        }
        
    }
    if(val.find("maxActive") != val.end())
    {
        if(!val["maxActive"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["maxActive"]);
            setMaxActive( newItem );
        }
        
    }
    if(val.find("maxIdle") != val.end())
    {
        if(!val["maxIdle"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["maxIdle"]);
            setMaxIdle( newItem );
        }
        
    }
    if(val.find("minIdle") != val.end())
    {
        if(!val["minIdle"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["minIdle"]);
            setMinIdle( newItem );
        }
        
    }
    if(val.find("initialSize") != val.end())
    {
        if(!val["initialSize"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["initialSize"]);
            setInitialSize( newItem );
        }
        
    }
    if(val.find("maxWait") != val.end())
    {
        if(!val["maxWait"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["maxWait"]);
            setMaxWait( newItem );
        }
        
    }
    if(val.find("maxAge") != val.end())
    {
        if(!val["maxAge"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["maxAge"]);
            setMaxAge( newItem );
        }
        
    }
    if(val.find("testOnBorrow") != val.end())
    {
        if(!val["testOnBorrow"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["testOnBorrow"]);
            setTestOnBorrow( newItem );
        }
        
    }
    if(val.find("testOnReturn") != val.end())
    {
        if(!val["testOnReturn"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["testOnReturn"]);
            setTestOnReturn( newItem );
        }
        
    }
    if(val.find("testWhileIdle") != val.end())
    {
        if(!val["testWhileIdle"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["testWhileIdle"]);
            setTestWhileIdle( newItem );
        }
        
    }
    if(val.find("validationQuery") != val.end())
    {
        if(!val["validationQuery"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["validationQuery"]);
            setValidationQuery( newItem );
        }
        
    }
    if(val.find("validationQueryTimeout") != val.end())
    {
        if(!val["validationQueryTimeout"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["validationQueryTimeout"]);
            setValidationQueryTimeout( newItem );
        }
        
    }
    if(val.find("timeBetweenEvictionRunsMillis") != val.end())
    {
        if(!val["timeBetweenEvictionRunsMillis"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["timeBetweenEvictionRunsMillis"]);
            setTimeBetweenEvictionRunsMillis( newItem );
        }
        
    }
    if(val.find("minEvictableIdleTimeMillis") != val.end())
    {
        if(!val["minEvictableIdleTimeMillis"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["minEvictableIdleTimeMillis"]);
            setMinEvictableIdleTimeMillis( newItem );
        }
        
    }
    if(val.find("connectionProperties") != val.end())
    {
        if(!val["connectionProperties"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["connectionProperties"]);
            setConnectionProperties( newItem );
        }
        
    }
    if(val.find("initSQL") != val.end())
    {
        if(!val["initSQL"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["initSQL"]);
            setInitSQL( newItem );
        }
        
    }
    if(val.find("jdbcInterceptors") != val.end())
    {
        if(!val["jdbcInterceptors"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["jdbcInterceptors"]);
            setJdbcInterceptors( newItem );
        }
        
    }
    if(val.find("validationInterval") != val.end())
    {
        if(!val["validationInterval"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["validationInterval"]);
            setValidationInterval( newItem );
        }
        
    }
    if(val.find("logValidationErrors") != val.end())
    {
        if(!val["logValidationErrors"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["logValidationErrors"]);
            setLogValidationErrors( newItem );
        }
        
    }
    if(val.find("datasource.svc.properties") != val.end())
    {
        if(!val["datasource.svc.properties"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["datasource.svc.properties"]);
            setDatasourceSvcProperties( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getDatasourceName() const
{
    return m_Datasource_name;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDatasourceName(ConfigNodePropertyString const& value)
{
    m_Datasource_name = value;
    m_Datasource_nameIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::datasourceNameIsSet() const
{
    return m_Datasource_nameIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDatasource_name()
{
    m_Datasource_nameIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getDatasourceSvcPropName() const
{
    return m_Datasource_svc_prop_name;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDatasourceSvcPropName(ConfigNodePropertyString const& value)
{
    m_Datasource_svc_prop_name = value;
    m_Datasource_svc_prop_nameIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::datasourceSvcPropNameIsSet() const
{
    return m_Datasource_svc_prop_nameIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDatasource_svc_prop_name()
{
    m_Datasource_svc_prop_nameIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getDriverClassName() const
{
    return m_DriverClassName;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDriverClassName(ConfigNodePropertyString const& value)
{
    m_DriverClassName = value;
    m_DriverClassNameIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::driverClassNameIsSet() const
{
    return m_DriverClassNameIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDriverClassName()
{
    m_DriverClassNameIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getUrl() const
{
    return m_Url;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setUrl(ConfigNodePropertyString const& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::urlIsSet() const
{
    return m_UrlIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetUrl()
{
    m_UrlIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getUsername() const
{
    return m_Username;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setUsername(ConfigNodePropertyString const& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::usernameIsSet() const
{
    return m_UsernameIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetUsername()
{
    m_UsernameIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getPassword() const
{
    return m_Password;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setPassword(ConfigNodePropertyString const& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::passwordIsSet() const
{
    return m_PasswordIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetPassword()
{
    m_PasswordIsSet = false;
}
ConfigNodePropertyDropDown OrgApacheSlingDatasourceDataSourceFactoryProperties::getDefaultAutoCommit() const
{
    return m_DefaultAutoCommit;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDefaultAutoCommit(ConfigNodePropertyDropDown const& value)
{
    m_DefaultAutoCommit = value;
    m_DefaultAutoCommitIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::defaultAutoCommitIsSet() const
{
    return m_DefaultAutoCommitIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDefaultAutoCommit()
{
    m_DefaultAutoCommitIsSet = false;
}
ConfigNodePropertyDropDown OrgApacheSlingDatasourceDataSourceFactoryProperties::getDefaultReadOnly() const
{
    return m_DefaultReadOnly;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDefaultReadOnly(ConfigNodePropertyDropDown const& value)
{
    m_DefaultReadOnly = value;
    m_DefaultReadOnlyIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::defaultReadOnlyIsSet() const
{
    return m_DefaultReadOnlyIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDefaultReadOnly()
{
    m_DefaultReadOnlyIsSet = false;
}
ConfigNodePropertyDropDown OrgApacheSlingDatasourceDataSourceFactoryProperties::getDefaultTransactionIsolation() const
{
    return m_DefaultTransactionIsolation;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDefaultTransactionIsolation(ConfigNodePropertyDropDown const& value)
{
    m_DefaultTransactionIsolation = value;
    m_DefaultTransactionIsolationIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::defaultTransactionIsolationIsSet() const
{
    return m_DefaultTransactionIsolationIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDefaultTransactionIsolation()
{
    m_DefaultTransactionIsolationIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getDefaultCatalog() const
{
    return m_DefaultCatalog;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDefaultCatalog(ConfigNodePropertyString const& value)
{
    m_DefaultCatalog = value;
    m_DefaultCatalogIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::defaultCatalogIsSet() const
{
    return m_DefaultCatalogIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDefaultCatalog()
{
    m_DefaultCatalogIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getMaxActive() const
{
    return m_MaxActive;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setMaxActive(ConfigNodePropertyInteger const& value)
{
    m_MaxActive = value;
    m_MaxActiveIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::maxActiveIsSet() const
{
    return m_MaxActiveIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetMaxActive()
{
    m_MaxActiveIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getMaxIdle() const
{
    return m_MaxIdle;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setMaxIdle(ConfigNodePropertyInteger const& value)
{
    m_MaxIdle = value;
    m_MaxIdleIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::maxIdleIsSet() const
{
    return m_MaxIdleIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetMaxIdle()
{
    m_MaxIdleIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getMinIdle() const
{
    return m_MinIdle;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setMinIdle(ConfigNodePropertyInteger const& value)
{
    m_MinIdle = value;
    m_MinIdleIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::minIdleIsSet() const
{
    return m_MinIdleIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetMinIdle()
{
    m_MinIdleIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getInitialSize() const
{
    return m_InitialSize;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setInitialSize(ConfigNodePropertyInteger const& value)
{
    m_InitialSize = value;
    m_InitialSizeIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::initialSizeIsSet() const
{
    return m_InitialSizeIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetInitialSize()
{
    m_InitialSizeIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getMaxWait() const
{
    return m_MaxWait;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setMaxWait(ConfigNodePropertyInteger const& value)
{
    m_MaxWait = value;
    m_MaxWaitIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::maxWaitIsSet() const
{
    return m_MaxWaitIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetMaxWait()
{
    m_MaxWaitIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getMaxAge() const
{
    return m_MaxAge;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setMaxAge(ConfigNodePropertyInteger const& value)
{
    m_MaxAge = value;
    m_MaxAgeIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::maxAgeIsSet() const
{
    return m_MaxAgeIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetMaxAge()
{
    m_MaxAgeIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDatasourceDataSourceFactoryProperties::getTestOnBorrow() const
{
    return m_TestOnBorrow;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setTestOnBorrow(ConfigNodePropertyBoolean const& value)
{
    m_TestOnBorrow = value;
    m_TestOnBorrowIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::testOnBorrowIsSet() const
{
    return m_TestOnBorrowIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetTestOnBorrow()
{
    m_TestOnBorrowIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDatasourceDataSourceFactoryProperties::getTestOnReturn() const
{
    return m_TestOnReturn;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setTestOnReturn(ConfigNodePropertyBoolean const& value)
{
    m_TestOnReturn = value;
    m_TestOnReturnIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::testOnReturnIsSet() const
{
    return m_TestOnReturnIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetTestOnReturn()
{
    m_TestOnReturnIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDatasourceDataSourceFactoryProperties::getTestWhileIdle() const
{
    return m_TestWhileIdle;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setTestWhileIdle(ConfigNodePropertyBoolean const& value)
{
    m_TestWhileIdle = value;
    m_TestWhileIdleIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::testWhileIdleIsSet() const
{
    return m_TestWhileIdleIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetTestWhileIdle()
{
    m_TestWhileIdleIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getValidationQuery() const
{
    return m_ValidationQuery;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setValidationQuery(ConfigNodePropertyString const& value)
{
    m_ValidationQuery = value;
    m_ValidationQueryIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::validationQueryIsSet() const
{
    return m_ValidationQueryIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetValidationQuery()
{
    m_ValidationQueryIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getValidationQueryTimeout() const
{
    return m_ValidationQueryTimeout;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setValidationQueryTimeout(ConfigNodePropertyInteger const& value)
{
    m_ValidationQueryTimeout = value;
    m_ValidationQueryTimeoutIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::validationQueryTimeoutIsSet() const
{
    return m_ValidationQueryTimeoutIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetValidationQueryTimeout()
{
    m_ValidationQueryTimeoutIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getTimeBetweenEvictionRunsMillis() const
{
    return m_TimeBetweenEvictionRunsMillis;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setTimeBetweenEvictionRunsMillis(ConfigNodePropertyInteger const& value)
{
    m_TimeBetweenEvictionRunsMillis = value;
    m_TimeBetweenEvictionRunsMillisIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::timeBetweenEvictionRunsMillisIsSet() const
{
    return m_TimeBetweenEvictionRunsMillisIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetTimeBetweenEvictionRunsMillis()
{
    m_TimeBetweenEvictionRunsMillisIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getMinEvictableIdleTimeMillis() const
{
    return m_MinEvictableIdleTimeMillis;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setMinEvictableIdleTimeMillis(ConfigNodePropertyInteger const& value)
{
    m_MinEvictableIdleTimeMillis = value;
    m_MinEvictableIdleTimeMillisIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::minEvictableIdleTimeMillisIsSet() const
{
    return m_MinEvictableIdleTimeMillisIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetMinEvictableIdleTimeMillis()
{
    m_MinEvictableIdleTimeMillisIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getConnectionProperties() const
{
    return m_ConnectionProperties;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setConnectionProperties(ConfigNodePropertyString const& value)
{
    m_ConnectionProperties = value;
    m_ConnectionPropertiesIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::connectionPropertiesIsSet() const
{
    return m_ConnectionPropertiesIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetConnectionProperties()
{
    m_ConnectionPropertiesIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getInitSQL() const
{
    return m_InitSQL;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setInitSQL(ConfigNodePropertyString const& value)
{
    m_InitSQL = value;
    m_InitSQLIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::initSQLIsSet() const
{
    return m_InitSQLIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetInitSQL()
{
    m_InitSQLIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDatasourceDataSourceFactoryProperties::getJdbcInterceptors() const
{
    return m_JdbcInterceptors;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setJdbcInterceptors(ConfigNodePropertyString const& value)
{
    m_JdbcInterceptors = value;
    m_JdbcInterceptorsIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::jdbcInterceptorsIsSet() const
{
    return m_JdbcInterceptorsIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetJdbcInterceptors()
{
    m_JdbcInterceptorsIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDatasourceDataSourceFactoryProperties::getValidationInterval() const
{
    return m_ValidationInterval;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setValidationInterval(ConfigNodePropertyInteger const& value)
{
    m_ValidationInterval = value;
    m_ValidationIntervalIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::validationIntervalIsSet() const
{
    return m_ValidationIntervalIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetValidationInterval()
{
    m_ValidationIntervalIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDatasourceDataSourceFactoryProperties::getLogValidationErrors() const
{
    return m_LogValidationErrors;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setLogValidationErrors(ConfigNodePropertyBoolean const& value)
{
    m_LogValidationErrors = value;
    m_LogValidationErrorsIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::logValidationErrorsIsSet() const
{
    return m_LogValidationErrorsIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetLogValidationErrors()
{
    m_LogValidationErrorsIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingDatasourceDataSourceFactoryProperties::getDatasourceSvcProperties() const
{
    return m_Datasource_svc_properties;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::setDatasourceSvcProperties(ConfigNodePropertyArray const& value)
{
    m_Datasource_svc_properties = value;
    m_Datasource_svc_propertiesIsSet = true;
}
bool OrgApacheSlingDatasourceDataSourceFactoryProperties::datasourceSvcPropertiesIsSet() const
{
    return m_Datasource_svc_propertiesIsSet;
}
void OrgApacheSlingDatasourceDataSourceFactoryProperties::unsetDatasource_svc_properties()
{
    m_Datasource_svc_propertiesIsSet = false;
}

}
}
}
}
