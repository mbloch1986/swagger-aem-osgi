//
// ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties: Codable {

    public var threshold: ConfigNodePropertyInteger?
    public var jobTopicName: ConfigNodePropertyString?
    public var emailEnabled: ConfigNodePropertyBoolean?

    public init(threshold: ConfigNodePropertyInteger?, jobTopicName: ConfigNodePropertyString?, emailEnabled: ConfigNodePropertyBoolean?) {
        self.threshold = threshold
        self.jobTopicName = jobTopicName
        self.emailEnabled = emailEnabled
    }


}
