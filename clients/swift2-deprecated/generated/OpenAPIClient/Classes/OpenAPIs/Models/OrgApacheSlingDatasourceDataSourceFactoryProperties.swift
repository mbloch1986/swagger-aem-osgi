//
// OrgApacheSlingDatasourceDataSourceFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingDatasourceDataSourceFactoryProperties: JSONEncodable {
    public var datasourceName: ConfigNodePropertyString?
    public var datasourceSvcPropName: ConfigNodePropertyString?
    public var driverClassName: ConfigNodePropertyString?
    public var url: ConfigNodePropertyString?
    public var username: ConfigNodePropertyString?
    public var password: ConfigNodePropertyString?
    public var defaultAutoCommit: ConfigNodePropertyDropDown?
    public var defaultReadOnly: ConfigNodePropertyDropDown?
    public var defaultTransactionIsolation: ConfigNodePropertyDropDown?
    public var defaultCatalog: ConfigNodePropertyString?
    public var maxActive: ConfigNodePropertyInteger?
    public var maxIdle: ConfigNodePropertyInteger?
    public var minIdle: ConfigNodePropertyInteger?
    public var initialSize: ConfigNodePropertyInteger?
    public var maxWait: ConfigNodePropertyInteger?
    public var maxAge: ConfigNodePropertyInteger?
    public var testOnBorrow: ConfigNodePropertyBoolean?
    public var testOnReturn: ConfigNodePropertyBoolean?
    public var testWhileIdle: ConfigNodePropertyBoolean?
    public var validationQuery: ConfigNodePropertyString?
    public var validationQueryTimeout: ConfigNodePropertyInteger?
    public var timeBetweenEvictionRunsMillis: ConfigNodePropertyInteger?
    public var minEvictableIdleTimeMillis: ConfigNodePropertyInteger?
    public var connectionProperties: ConfigNodePropertyString?
    public var initSQL: ConfigNodePropertyString?
    public var jdbcInterceptors: ConfigNodePropertyString?
    public var validationInterval: ConfigNodePropertyInteger?
    public var logValidationErrors: ConfigNodePropertyBoolean?
    public var datasourceSvcProperties: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["datasource.name"] = self.datasourceName?.encodeToJSON()
        nillableDictionary["datasource.svc.prop.name"] = self.datasourceSvcPropName?.encodeToJSON()
        nillableDictionary["driverClassName"] = self.driverClassName?.encodeToJSON()
        nillableDictionary["url"] = self.url?.encodeToJSON()
        nillableDictionary["username"] = self.username?.encodeToJSON()
        nillableDictionary["password"] = self.password?.encodeToJSON()
        nillableDictionary["defaultAutoCommit"] = self.defaultAutoCommit?.encodeToJSON()
        nillableDictionary["defaultReadOnly"] = self.defaultReadOnly?.encodeToJSON()
        nillableDictionary["defaultTransactionIsolation"] = self.defaultTransactionIsolation?.encodeToJSON()
        nillableDictionary["defaultCatalog"] = self.defaultCatalog?.encodeToJSON()
        nillableDictionary["maxActive"] = self.maxActive?.encodeToJSON()
        nillableDictionary["maxIdle"] = self.maxIdle?.encodeToJSON()
        nillableDictionary["minIdle"] = self.minIdle?.encodeToJSON()
        nillableDictionary["initialSize"] = self.initialSize?.encodeToJSON()
        nillableDictionary["maxWait"] = self.maxWait?.encodeToJSON()
        nillableDictionary["maxAge"] = self.maxAge?.encodeToJSON()
        nillableDictionary["testOnBorrow"] = self.testOnBorrow?.encodeToJSON()
        nillableDictionary["testOnReturn"] = self.testOnReturn?.encodeToJSON()
        nillableDictionary["testWhileIdle"] = self.testWhileIdle?.encodeToJSON()
        nillableDictionary["validationQuery"] = self.validationQuery?.encodeToJSON()
        nillableDictionary["validationQueryTimeout"] = self.validationQueryTimeout?.encodeToJSON()
        nillableDictionary["timeBetweenEvictionRunsMillis"] = self.timeBetweenEvictionRunsMillis?.encodeToJSON()
        nillableDictionary["minEvictableIdleTimeMillis"] = self.minEvictableIdleTimeMillis?.encodeToJSON()
        nillableDictionary["connectionProperties"] = self.connectionProperties?.encodeToJSON()
        nillableDictionary["initSQL"] = self.initSQL?.encodeToJSON()
        nillableDictionary["jdbcInterceptors"] = self.jdbcInterceptors?.encodeToJSON()
        nillableDictionary["validationInterval"] = self.validationInterval?.encodeToJSON()
        nillableDictionary["logValidationErrors"] = self.logValidationErrors?.encodeToJSON()
        nillableDictionary["datasource.svc.properties"] = self.datasourceSvcProperties?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
