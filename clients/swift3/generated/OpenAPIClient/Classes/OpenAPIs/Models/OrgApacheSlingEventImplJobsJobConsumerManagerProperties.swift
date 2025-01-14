//
// OrgApacheSlingEventImplJobsJobConsumerManagerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingEventImplJobsJobConsumerManagerProperties: JSONEncodable {

    public var orgApacheSlingInstallerConfigurationPersist: ConfigNodePropertyBoolean?
    public var jobConsumermanagerWhitelist: ConfigNodePropertyArray?
    public var jobConsumermanagerBlacklist: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["org.apache.sling.installer.configuration.persist"] = self.orgApacheSlingInstallerConfigurationPersist?.encodeToJSON()
        nillableDictionary["job.consumermanager.whitelist"] = self.jobConsumermanagerWhitelist?.encodeToJSON()
        nillableDictionary["job.consumermanager.blacklist"] = self.jobConsumermanagerBlacklist?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

