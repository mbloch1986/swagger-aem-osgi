//
// ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties: Codable {

    public var enabled: ConfigNodePropertyBoolean?
    public var agentName: ConfigNodePropertyString?
    public var diffPath: ConfigNodePropertyString?
    public var observedPath: ConfigNodePropertyString?
    public var serviceName: ConfigNodePropertyString?
    public var propertyNames: ConfigNodePropertyString?
    public var distributionDelay: ConfigNodePropertyInteger?
    public var serviceUserTarget: ConfigNodePropertyString?

    public init(enabled: ConfigNodePropertyBoolean?, agentName: ConfigNodePropertyString?, diffPath: ConfigNodePropertyString?, observedPath: ConfigNodePropertyString?, serviceName: ConfigNodePropertyString?, propertyNames: ConfigNodePropertyString?, distributionDelay: ConfigNodePropertyInteger?, serviceUserTarget: ConfigNodePropertyString?) {
        self.enabled = enabled
        self.agentName = agentName
        self.diffPath = diffPath
        self.observedPath = observedPath
        self.serviceName = serviceName
        self.propertyNames = propertyNames
        self.distributionDelay = distributionDelay
        self.serviceUserTarget = serviceUserTarget
    }

    public enum CodingKeys: String, CodingKey { 
        case enabled
        case agentName
        case diffPath
        case observedPath
        case serviceName
        case propertyNames
        case distributionDelay
        case serviceUserTarget = "serviceUser.target"
    }


}

