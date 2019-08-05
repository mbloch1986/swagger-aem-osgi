//
// ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties: Codable {

    public var syncTranslationStateSchedulingFormat: ConfigNodePropertyString?
    public var schedulingRepeatTranslationSchedulingFormat: ConfigNodePropertyString?
    public var syncTranslationStateLockTimeoutInMinutes: ConfigNodePropertyString?
    public var exportFormat: ConfigNodePropertyDropDown?

    public init(syncTranslationStateSchedulingFormat: ConfigNodePropertyString?, schedulingRepeatTranslationSchedulingFormat: ConfigNodePropertyString?, syncTranslationStateLockTimeoutInMinutes: ConfigNodePropertyString?, exportFormat: ConfigNodePropertyDropDown?) {
        self.syncTranslationStateSchedulingFormat = syncTranslationStateSchedulingFormat
        self.schedulingRepeatTranslationSchedulingFormat = schedulingRepeatTranslationSchedulingFormat
        self.syncTranslationStateLockTimeoutInMinutes = syncTranslationStateLockTimeoutInMinutes
        self.exportFormat = exportFormat
    }

    public enum CodingKeys: String, CodingKey { 
        case syncTranslationStateSchedulingFormat = "syncTranslationState.schedulingFormat"
        case schedulingRepeatTranslationSchedulingFormat = "schedulingRepeatTranslation.schedulingFormat"
        case syncTranslationStateLockTimeoutInMinutes = "syncTranslationState.lockTimeoutInMinutes"
        case exportFormat = "export.format"
    }


}
