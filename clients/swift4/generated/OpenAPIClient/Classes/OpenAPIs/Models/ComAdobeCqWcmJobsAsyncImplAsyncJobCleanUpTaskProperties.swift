//
// ComAdobeCqWcmJobsAsyncImplAsyncJobCleanUpTaskProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqWcmJobsAsyncImplAsyncJobCleanUpTaskProperties: Codable {

    public var schedulerExpression: ConfigNodePropertyString?
    public var jobPurgeThreshold: ConfigNodePropertyInteger?
    public var jobPurgeMaxJobs: ConfigNodePropertyInteger?

    public init(schedulerExpression: ConfigNodePropertyString?, jobPurgeThreshold: ConfigNodePropertyInteger?, jobPurgeMaxJobs: ConfigNodePropertyInteger?) {
        self.schedulerExpression = schedulerExpression
        self.jobPurgeThreshold = jobPurgeThreshold
        self.jobPurgeMaxJobs = jobPurgeMaxJobs
    }

    public enum CodingKeys: String, CodingKey { 
        case schedulerExpression = "scheduler.expression"
        case jobPurgeThreshold = "job.purge.threshold"
        case jobPurgeMaxJobs = "job.purge.max.jobs"
    }


}

