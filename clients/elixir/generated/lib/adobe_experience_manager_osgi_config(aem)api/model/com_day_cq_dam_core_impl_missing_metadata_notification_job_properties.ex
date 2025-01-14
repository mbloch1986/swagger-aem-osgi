# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplMissingMetadataNotificationJobProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"cq.dam.missingmetadata.notification.scheduler.istimebased",
    :"cq.dam.missingmetadata.notification.scheduler.timebased.rule",
    :"cq.dam.missingmetadata.notification.scheduler.period.rule",
    :"cq.dam.missingmetadata.notification.recipient"
  ]

  @type t :: %__MODULE__{
    :"cq.dam.missingmetadata.notification.scheduler.istimebased" => ConfigNodePropertyBoolean,
    :"cq.dam.missingmetadata.notification.scheduler.timebased.rule" => ConfigNodePropertyString,
    :"cq.dam.missingmetadata.notification.scheduler.period.rule" => ConfigNodePropertyInteger,
    :"cq.dam.missingmetadata.notification.recipient" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplMissingMetadataNotificationJobProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"cq.dam.missingmetadata.notification.scheduler.istimebased", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"cq.dam.missingmetadata.notification.scheduler.timebased.rule", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"cq.dam.missingmetadata.notification.scheduler.period.rule", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"cq.dam.missingmetadata.notification.recipient", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

