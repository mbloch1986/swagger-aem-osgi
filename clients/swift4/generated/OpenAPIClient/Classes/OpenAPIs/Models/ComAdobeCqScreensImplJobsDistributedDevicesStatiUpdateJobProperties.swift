//
// ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqScreensImplJobsDistributedDevicesStatiUpdateJobProperties: Codable {

    public var schedulerExpression: ConfigNodePropertyString?

    public init(schedulerExpression: ConfigNodePropertyString?) {
        self.schedulerExpression = schedulerExpression
    }

    public enum CodingKeys: String, CodingKey { 
        case schedulerExpression = "scheduler.expression"
    }


}

