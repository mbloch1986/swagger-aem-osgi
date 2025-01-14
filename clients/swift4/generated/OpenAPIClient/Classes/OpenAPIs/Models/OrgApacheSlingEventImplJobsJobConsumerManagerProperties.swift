//
// OrgApacheSlingEventImplJobsJobConsumerManagerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingEventImplJobsJobConsumerManagerProperties: Codable {

    public var orgApacheSlingInstallerConfigurationPersist: ConfigNodePropertyBoolean?
    public var jobConsumermanagerWhitelist: ConfigNodePropertyArray?
    public var jobConsumermanagerBlacklist: ConfigNodePropertyArray?

    public init(orgApacheSlingInstallerConfigurationPersist: ConfigNodePropertyBoolean?, jobConsumermanagerWhitelist: ConfigNodePropertyArray?, jobConsumermanagerBlacklist: ConfigNodePropertyArray?) {
        self.orgApacheSlingInstallerConfigurationPersist = orgApacheSlingInstallerConfigurationPersist
        self.jobConsumermanagerWhitelist = jobConsumermanagerWhitelist
        self.jobConsumermanagerBlacklist = jobConsumermanagerBlacklist
    }

    public enum CodingKeys: String, CodingKey { 
        case orgApacheSlingInstallerConfigurationPersist = "org.apache.sling.installer.configuration.persist"
        case jobConsumermanagerWhitelist = "job.consumermanager.whitelist"
        case jobConsumermanagerBlacklist = "job.consumermanager.blacklist"
    }


}

