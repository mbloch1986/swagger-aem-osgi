# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqReportingImplConfigServiceImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"repconf.timezone",
    :"repconf.locale",
    :"repconf.snapshots",
    :"repconf.repdir",
    :"repconf.hourofday",
    :"repconf.minofhour",
    :"repconf.maxrows",
    :"repconf.fakedata",
    :"repconf.snapshotuser",
    :"repconf.enforcesnapshotuser"
  ]

  @type t :: %__MODULE__{
    :"repconf.timezone" => ConfigNodePropertyString,
    :"repconf.locale" => ConfigNodePropertyString,
    :"repconf.snapshots" => ConfigNodePropertyString,
    :"repconf.repdir" => ConfigNodePropertyString,
    :"repconf.hourofday" => ConfigNodePropertyInteger,
    :"repconf.minofhour" => ConfigNodePropertyInteger,
    :"repconf.maxrows" => ConfigNodePropertyInteger,
    :"repconf.fakedata" => ConfigNodePropertyBoolean,
    :"repconf.snapshotuser" => ConfigNodePropertyString,
    :"repconf.enforcesnapshotuser" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqReportingImplConfigServiceImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"repconf.timezone", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"repconf.locale", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"repconf.snapshots", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"repconf.repdir", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"repconf.hourofday", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"repconf.minofhour", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"repconf.maxrows", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"repconf.fakedata", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"repconf.snapshotuser", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"repconf.enforcesnapshotuser", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end
