# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplExpiryNotificationJobImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"cq.dam.expiry.notification.scheduler.istimebased",
    :"cq.dam.expiry.notification.scheduler.timebased.rule",
    :"cq.dam.expiry.notification.scheduler.period.rule",
    :"send_email",
    :"asset_expired_limit",
    :"prior_notification_seconds",
    :"cq.dam.expiry.notification.url.protocol"
  ]

  @type t :: %__MODULE__{
    :"cq.dam.expiry.notification.scheduler.istimebased" => ConfigNodePropertyBoolean,
    :"cq.dam.expiry.notification.scheduler.timebased.rule" => ConfigNodePropertyString,
    :"cq.dam.expiry.notification.scheduler.period.rule" => ConfigNodePropertyInteger,
    :"send_email" => ConfigNodePropertyBoolean,
    :"asset_expired_limit" => ConfigNodePropertyInteger,
    :"prior_notification_seconds" => ConfigNodePropertyInteger,
    :"cq.dam.expiry.notification.url.protocol" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplExpiryNotificationJobImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"cq.dam.expiry.notification.scheduler.istimebased", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"cq.dam.expiry.notification.scheduler.timebased.rule", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"cq.dam.expiry.notification.scheduler.period.rule", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"send_email", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"asset_expired_limit", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"prior_notification_seconds", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"cq.dam.expiry.notification.url.protocol", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

