function New-ComDayCqWcmCoreImplVariantsPageVariantsProviderImplInfo {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${pid},
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${title},
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${description},
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Org.OpenAPITools.Model.ComDayCqWcmCoreImplVariantsPageVariantsProviderImplProperties]]
        ${properties},
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${bundleUnderscorelocation},
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${serviceUnderscorelocation}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.ComDayCqWcmCoreImplVariantsPageVariantsProviderImplInfo' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.ComDayCqWcmCoreImplVariantsPageVariantsProviderImplInfo -ArgumentList @(
            ${pid},
            ${title},
            ${description},
            ${properties},
            ${bundleUnderscorelocation},
            ${serviceUnderscorelocation}
        )
    }
}